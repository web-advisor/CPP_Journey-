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