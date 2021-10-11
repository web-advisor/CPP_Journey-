# How Compilation Works in C++? 
    Compilation involves changing C++ Source Code to Machine Code.

![How Compilation works](images/CompilationWorking.png)    
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

# Operators in C++ 


<style>
    th,td,table{
        border:1px black solid;
    }
</style>
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

---
<br />

---

