# ENGG1500.1
2019 Semester 1 Project 1

English Text Cipher Instructions:

To operate program follow steps:
    1-select operation
    2-select key
    3-write input text
    4-run main.c
    
1-Program operation selection:
    Edit the first character in operation.txt (no spaces or lines before) and use the below numbers to select the desired operation
        (1) Rotation encryption
        (2) Rotation decryption
        (3) Substitution encryption
        (4) Substitution decryption

2-Key selection:
    Edit the first line of key.txt (with no spaces or lines before) and use the below instructions for rotation & substitution ciphers respectively
        Rotation ciphers: a number from 0-25 (0 will produce no change in text) and no letters (any alphabet use will result in a key of 0)
        Substitution: a string of 26 capital letters, correlating to each letter to be substituted. (ie BCD... will substitute A for B, B for C etc.)
        For decoding without key use 0 (only working for rotation)
        
3-Input text:
    Write your input text that is to be encoded or decoded in the file "input.txt". Only line 1 will be read, and more lines will result in an error where nothing gets printed to the terminal.

4-Running program:  
    Run using the command newCustom