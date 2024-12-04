# Palindrome Checker

A lightweight C program that determines whether a given sentence or word is a **palindrome**. This project is designed to efficiently evaluate strings, demonstrating fundamental C programming concepts like pointers, string manipulation, and enumeration types.

---

## Features

- **Palindrome Detection**:
  - Verifies if a given word or sentence reads the same forwards and backwards.
- **Flexible Input Handling**:
  - Processes up to 50 characters (adjustable via the `MAX_SIZE` macro).
  - Strips newline characters from input for seamless processing.
- **Enumeration for Readability**:
  - Utilizes `enum` to improve code clarity and logic for results:
    - `PALINDROME`
    - `NON_PALINDROME`
- **Pointer Arithmetic**:
  - Efficiently compares characters using two pointers (`ch1` and `ch2`), one starting at the beginning and the other at the end of the input.

---

## Code Explanation

### Core Logic:
1. **Input Handling**:
   - Accepts user input via `fgets`.
   - Removes trailing newline characters using `strcspn`.

2. **Pointer-Based Comparison**:
   - Initializes two pointers:
     - `ch1`: Points to the beginning of the string.
     - `ch2`: Points to the end of the string.
   - Compares characters iteratively from both ends, moving inward.

3. **Enumeration**:
   - Checks for mismatches:
     - If characters differ, sets the status to `NON_PALINDROME`.
     - If all characters match, sets the status to `PALINDROME`.

4. **Output**:
   - Prints whether the input is a palindrome or not.

---

## Usage

### Prerequisites
- A C compiler (e.g., GCC).

### Steps to Run:
1. Clone the repository:
   ```bash
   git clone https://github.com/YourUsername/Palindrome-Checker.git
   ```
2. Compile the program:
   ```bash
   gcc palindrome_checker.c -o palindrome_checker
   ```
3. Run the program:
   ```bash
   ./palindrome_checker
   ```

### Example Interaction
**Input**:  
```text
Please enter a sentence/word: radar
```

**Output**:  
```text
The sentence/word 'radar' is a palindrome.
```

**Input**:  
```text
Please enter a sentence/word: hello
```

**Output**:  
```text
The sentence/word 'hello' is not a palindrome.
```

---

## License

This project is licensed under the MIT License. Feel free to use, modify, and share it!

---
