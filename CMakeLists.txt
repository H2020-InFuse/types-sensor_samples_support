# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2
cmake_minimum_required(VERSION 3.3)
# required version 3.3: provides "IN_LIST" operator in if()
find_package(esrocos)
esrocos_init(sensor_samples_support 1.0)
esrocos_standard_layout()

