#!/bin/bash

# Test cases and their expected output

# Test 1: Standard input
echo "Test 1: Standard input"
echo "Hello World" | ./ccwc -w -l -c
echo "Expected: 1 2 12"

# Test 2.1: File input
echo "Test 2.1: File input (counting chars)"
./ccwc -c test.txt
echo "Expected: 342190 test.txt"

# Test 2.2: File input
echo "Test 2.2: File input (counting lines)"
./ccwc -l test.txt
echo "Expected: 7145 test.txt"

# Test 2.3: File input
echo "Test 2.2: File input (counting words)"
./ccwc -w test.txt
echo "Expected: 58164 test.txt"

# Test 3: No options (default behavior)
echo "Test 3: No options"
echo "Hello World" | ./ccwc
echo "Expected: 1 2 12"
