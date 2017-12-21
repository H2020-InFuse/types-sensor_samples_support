/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Utility functions for asn1SonarBeam (implementation).
 */

#include "asn1SonarBeamUtils.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 1000

size_t readSonarBeamFile(const char* file, asn1SccSonarBeam** pOutSamples, size_t maxSamples)
{
    size_t readCount = 0;
    FILE* fd = NULL;
    char line[MAX_LINE];
    char* pLine = NULL;
    int readOk = 1;
    int parseResult = 0;
    asn1SccSonarBeam sample;
    
    assert(NULL != pOutSamples && "NULL output array in readSonarBeamFile");
    
    fd = fopen(file, "r");
    
    if (NULL != fd)
    {
        while (readOk && readCount < maxSamples)
        {
            pLine = fgets(&line[0], MAX_LINE, fd);
            if (NULL != pLine)
            {
                parseResult = readSonarBeamEntry(line, &sample);
                if (0 == parseResult)
                {
                    pOutSamples[readCount] = malloc(sizeof(asn1SccSonarBeam));
                    *pOutSamples[readCount] = sample;
                    readCount++;
                }
            }
            else
            {
                readOk = 0;
            }
        }
        
        fclose(fd);
    }
    
    return readCount;
}


int readSonarBeamEntry(const char* line, asn1SccSonarBeam* pOutSample)
{
    int parsed = 0;
    int count = 0;
    int incr = 0;
    
    assert(NULL != pOutSample && "NULL output pointer in readSonarBeamEntry");
    
    if ('#' == line[0])
    {
        // Comment
        return 1;
    }
    else
    {
        parsed = sscanf(&line[count], "%lld%n", &pOutSample->ref_time.microseconds, &incr);
        pOutSample->ref_time.usecPerSec = 1000000;
        if (0 != parsed)
        {
            count += incr;
        }
        else
        {
            // Error
            return -1;
        }
        
        parsed = sscanf(&line[count], "%lf%n", &pOutSample->bearing.rad, &incr);
        if (0 != parsed)
        {
            count += incr;
        }
        else
        {
            // Error
            return -1;
        }
        
        parsed = sscanf(&line[count], "%lf%n", &pOutSample->sampling_interval, &incr);
        if (0 != parsed)
        {
            count += incr;
        }
        else
        {
            // Error
            return -1;
        }
        
        parsed = sscanf(&line[count], "%lf%n", &pOutSample->speed_of_sound, &incr);
        if (0 != parsed)
        {
            count += incr;
        }
        else
        {
            // Error
            return -1;
        }
        
        parsed = sscanf(&line[count], "%lf%n", &pOutSample->beamwidth_horizontal, &incr);
        if (0 != parsed)
        {
            count += incr;
        }
        else
        {
            // Error
            return -1;
        }
        
        parsed = sscanf(&line[count], "%lf%n", &pOutSample->beamwidth_vertical, &incr);
        if (0 != parsed)
        {
            count += incr;
        }
        else
        {
            // Error
            return -1;
        }

        // Read beam
        pOutSample->beam.nCount = 0;
        while (0 != parsed && pOutSample->beam.nCount <= 60)
        {
            parsed = sscanf(&line[count], "%lld%n", &pOutSample->beam.arr[pOutSample->beam.nCount], &incr);
            if (0 != parsed)
            {
                pOutSample->beam.nCount++;
                count += incr;
            }
        }
    }
    
    return 0;
}




