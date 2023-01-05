#!/usr/bin/python3
"""Minimum Operations to be performed
    Resurses: https://www.youtube.com/watch?v=03ZepmoVJGI
"""


def minOperations(n):
    """Returns the minimum number of operations to reach a number"""
    
    if type(n) is not int or n <= 1:
        return 0
    nOperations = 0
    half = 2
    while n > 1:
        if n % half == 0:
            nOperations += half
            n /= half
        else:
            half += 1
    return nOperations
