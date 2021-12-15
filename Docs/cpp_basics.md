# How Compilation Works in C++? 
    Compilation involves changing C++ Source Code to Machine Code.

![How Compilation works](https://raw.githubusercontent.com/web-advisor/CPP_Journey-/master/Docs/Images/CompilationWorking.png)    
Starting with <b>C++ Source Code</b>, Code written in C++ Program. It is High Level Language. 
    
Then a Program called <b>Preprocessor</b> (a macro processing program) takes source file as input and does some processing :
        
- Includes content of the included header files(Header Files contains only the function prototypes and not the function definition of each function declared).
- Removes Spaces, Comments, etc.
- File Extension of generated Intermediate code is <b>.ii</b> and also called Pure HLL.

Then a program called <b>Compiler</b> transforms HLL to LLL. Functions :

- Checks for Errors in Syntax, Semantics and Type Error in the Source Code and if they exist, gives an error message and stops the build process.
- Converts the intermediate code to Assembly Code which is inturn passed to an <b>Assembler</b> in <b>.s</b> format. 
- Assembler will take in the Assembly Code and convert it into <b>Object Code</b> or <b>Machine Code</b> in <b>.obj</b> format.

Then Object Codes of all the involved files,i.e. main program Source Code, Standard Library(this contains the function definition of all predefined functions in a given C++ version. Hence giving definitions to functions decclared in Header files.Note : this is not included directly because it is a large file and including this will make programs very slow), External Libraries, etc. are fed to a <b>Linker</b> which links all the .obj files involved. Functions : 

- Inclusion of Standard Library, External Libraries 
- Linking all files included. 
- Generates <b>excutable file</b> in <b>.exe</b> format.
- Looks for Runtime Error, use of undefined functions, divide by zero, etc.

Then a program called <b>Loader</b> loads this and all linked files on the CPU and Excution takes place. After Execution <b>Output</b> is obtained. At the end if the logic of the Program os incorrect, Logical Error is the reason.

<br/>

    Note : .c -> C Language Source File, .cpp -> C Plus Plus Source File, .h -> Header File in C Language, .hpp -> Header in C Plus Plus Language.

---
<br />

---
# Errors In C++
- Compiler Errors : 
    - Syntax Errors :
        - Occurs when rules of Programming Language are misused.
        - Ex. cin<<a;
    - Semantic Errors : 
        - Occurs when it is syntactically correct but has no meaning.
        - Ex. x + y = z; // Expression on the left side of Assignment Operator. 
    - Type Errors : 
        - When we pass Wrong type of values to our objects or variables. 
        - Ex. int a = 3.14;
- RunTime Errors: 
    - Linker Errors : 
        - When the program is compiled successfully, and trying to link the different object file with the main object file. 
        - When this error is occurred, the executable is not generated.
        - Ex. int Main()    // main function written as Main
    - RunTime Errors :     
        - When the program is executing.
        - Ex. if we try to divide a number with 0.
- Logical Errors : 
    - When we get output but we may not get correct output due to some logical issues.
    - Ex. If we put a semicolon after a loop, that is syntactically correct, but will create one blank loop.    
---
<br />

---
# C++ Tokens :  
    The text of a C++ program consists of tokens and white space. A token is the smallest element of a C++ program that is meaningful to the compiler. 

The C++ parser recognizes these kinds of tokens:

- Keywords
    - Special name with meaning reserved by programming language.
    - Ex. break, if, else, while, int, etc.
- Identifiers
    - Building blocks of the program such as variables, classes, object, structures, pointers, functions, etc.
    - Can contain : 
        - letter or a digit [ underscore('_') counted as a letter ]
        - first character must be a letter
        - upper and lower case letters are considered different
        - cannot be keywords
        - identifiers should not be longer than 31 characters
        Ex. _chk, child, stu1, etc.
- Literals 
    - Data items which never change their value during the programme.
    - Types : 
        - Integer Constant Literals : 
            - Must have atleast one digit.
            - no decimal point 
            - \+ or - sign could be given
            - Types 
                - Decimal Integer Constants : 
                    - Number consisting of a sequence of digits.
                    - Ex. 4123, -11, 38, etc.
                - Octal Integer Constants : 
                    - Sequence of digits starting with zero in base 8.
                    - Ex. 023, 0143, etc.
                - Hexadecimal Integer Constants : 
                    - Sequence of digits starting with '0x' or '0X' in base 16.
                    - Ex. 0xC, 0X143, etc.
        - Float Constant Literals : 
            - Number having fractional parts. 
            - In fractional form
                - At least one digit before and after decimal point
                - \+ or - sign allowed.
                - Ex. -7.6, 4.23, etc.
            - In Exponential form 
                - Having a mantissa and an exponent.
                - Mantissa must be an integer or a real constant.
                - Exponent must be an integer.
                - Format : [Mantissa]E[Exponent]
                - Ex. 2.22E03, 1.52E05, 143E02, etc.
        - Character Constant Literals : 
            - Atleast one character within single quotes.
            - Non-graphic characters can be represented via escape sequences[ represented by backslash('\') ] Ex. '\b','\0',etc.
        - String Constant Literals : 
            - Sequence of characters between double quotes.
            - Treated as an array of characters
            - Each string is followed by a null character.
            - Ex. "abc" -> "abc\0" ->  4 bytes 
- Operators
    - Unary Operators : 
        - Performs operation on a single operand.
        - Ex. ++,--, etc.
    - Binary Operators : 
        - Performs operation on two operands.
        - Ex. +, *, -, /, %, etc. 
- Punctuators
    - Ex. {}, [], (), etc.

---
<br />

---

# Operators in C++ 


<table>
        <thead>
            <tr>
                <th>Precedence</th>
                <th>Operators</th>
                <th>Associativity</th>
                <th>Symbols</th>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>I<sup>st</sup></td>
                <td>Parenthesis/Brackets Operators and Postfix Operators</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>()</strong> For function recognition</li>
                        <li><strong>[]</strong> For array recognition</li>
                        <li><strong>-> .</strong> For Structure Pointer</li>
                        <li><strong>Postfix ++</strong> Uses the value then increments by 1</li>
                        <li><strong>Postfix --</strong> Uses the value then decrements by 1</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>II<sup>nd</sup></td>
                <td>Unary Operators</td>
                <td>Right to Left</td>
                <td>
                    <ul>
                        <li><strong>!</strong> Logical Not | Negates the Boolean result</li>
                        <li><strong>~</strong> Bitwise Not | Inverses each bit</li>
                        <li><strong>+</strong> defines positive integer</li>
                        <li><strong>-</strong> defines negative integer</li>
                        <li><strong>*(var)</strong> value at address var</li>
                        <li><strong>&var</strong> Address of var</li>
                        <li><strong>Prefix ++</strong> Increments the value by 1 then Uses the value</li>
                        <li><strong>Prefix --</strong> Uses the value then decrements by 1 Increments the value by 1 then Uses the value</li>
                        <li><strong>sizeof(var)</strong> returns an integer constant size of var</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>III<sup>rd</sup></td>
                <td>Multiplication Binary Operators</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>*</strong> Multiplication</li>
                        <li><strong>/</strong> Division</li>
                        <li><strong>%</strong> Modulo Operation</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>IV<sup>th</sup></td>
                <td>Additive Binary Operators</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>+</strong> Addition</li>
                        <li><strong>-</strong> Substraction</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>V<sup>th</sup></td>
                <td>Bitwise Shift Operators</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>>></strong> Right Shift Operator: New_Value = Old_Value/(2^value)</li>
                        <li><strong><<</strong> Left Shift Operator: New_Value = Old_Value * (2^value)</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>VI<sup>th</sup></td>
                <td>Relational Operators</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>>=</strong> Greater than or equal to</li>
                        <li><strong><=</strong> Smaller than or equal to</li>
                        <li><strong><</strong> Smaller than</li>
                        <li><strong><</strong> Greater than</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>VII<sup>th</sup></td>
                <td>Equality Operators</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>!=</strong> Not equal to comparison</li>
                        <li><strong>==</strong> Equal to comparison</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>VIII<sup>th</sup></td>
                <td>Bitwise AND</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>&</strong> Bitwise & in the representation of two numbers</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>IX<sup>th</sup></td>
                <td>Bitwise XOR</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>^</strong> Bitwise EX-OR in the binary representation of two numbers</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>X<sup>th</sup></td>
                <td>Bitwise OR</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>|</strong> Bitwise OR in the binary representation of two numbers</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>XI<sup>th</sup></td>
                <td>Logical AND</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>&&</strong> Logical AND of two boolean values</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>XII<sup>th</sup></td>
                <td>Logical OR</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>||</strong> Logical OR of two boolean values</li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>XIII<sup>th</sup></td>
                <td>Conditional/Ternary Operator</td>
                <td>Right to Left</td>
                <td>
                    <ul>
                        <li><strong>? :</strong> (Condition) ? true : false </li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>XIV<sup>th</sup></td>
                <td>Assignment Operators</td>
                <td>Right to Left</td>
                <td>
                    <ul>
                        <li><strong>L = R</strong></li>
                        <li><strong>L += R</strong></li>
                        <li><strong>L -= R</strong></li>
                        <li><strong>L *= R</strong></li>
                        <li><strong>L %= R</strong></li>
                        <li><strong>L /= R</strong></li>
                        <li><strong>L >>= R</strong></li>
                        <li><strong>L <<= R</strong></li>
                        <li><strong>L &= R</strong></li>
                        <li><strong>L |= R</strong></li>
                        <li><strong>L ^= R</strong></li>
                    </ul>
                </td>
            </tr>
            <tr>
                <td>XV<sup>th</sup></td>
                <td>Comma Operator</td>
                <td>Left to Right</td>
                <td>
                    <ul>
                        <li><strong>,</strong>
                            <ul>
                                <li><strong>Used as separator</strong> Ex. int a=3,b=4;</li>
                                <li><strong>Used as Operator</strong> It evaluates rest of the operands and rejects them.  Ex. int var=(printf("Hello World"),10); --> this prints 'Hello World' and assigns 10 to var.</li>
                            </ul>  
                        </li>
                    </ul>
                </td>
            </tr>
        </tbody>
    </table>

## Why Precedence ? 
    Operator with higher precedence will be evaluated first in an expression. 

## Why Associativity ? 
    When Precedence of operators are same and we need to decide which operator will be evaluated first. It does not help when there is just one operator of a given category.

## Short Circuit in && logical operation
    If there is a condition anywhere in the expression that returns false then the rest of the conditions after that will not be evaluated.

    Ex. incr = (a<b) && (b++); 
        if(a<b) is false then b++ is not evaluated and hence value is not modified. 


## Short Circuit in || logical operation
    If there is a condition anywhere in the expression that returns true then the rest of the conditions after that will not be evaluated.

    Ex. incr = (a<b) && (b++); 
        if(a<b) is true then b++ is not evaluated and hence value is not modified. 


---
<br />

---

# Control Statements :

### Conditional Statements 
- if - else
- switch case

### Iteration Statements 
- for loop
- while loop
- do while loop

### Jump Statements 
- break
- continue
- goto

## Constraints with Switch Statements :
- duplicate cases generates error
- only those expressions are allowed in switch which results in an integral constant value.
- Float value is not allowed as a const value in case label, only integer const allowed.
- Variables are not allowed as case labels.
- Macros are allowed as case labels.
- default case can be defined anywhere, it will be evaluated last.



---
<br />

---

# Functions :

Functions provide Code Reuseability and Abstraction in the program. 
Name of the function represents the initial address of the function i.e., &functionName;

    Functions are global by default. They can be easily accessed from outside. Also, reuse of the same function in another file is possible.

    To restrict access by an external file, static keyword is used.

---
<br />

---

# Static and Dynamic Scoping : 

## Stack
- Stack is a container(or memory segment) that holds data. Data is processed in LIFO(Last In First Out) manner.
- Operations possible are push and pop.
- Stack memory segment stores <strong>Activation Record</strong> of functions as they are called and pop them out as their return statement is encountered.
- <strong>Activation Record</strong> contains:
    - Local variables of the called function 
    - Return address of the calling function
    - Parameters of called function

![Activation Record](https://raw.githubusercontent.com/web-advisor/CPP_Journey-/master/Docs/Images/activationRecord.png) 
