<h1>
  📝 get_next_line
  </h1>

<p><b><i> The ‘get_next_file.c’ returns one line at the time. </i>
  <br>The main function in the ‘main.c’ file is written to display all lines using a while loop until the end of file.<br></b></p>
  
  
![2021-03-22 15 28 58](https://user-images.githubusercontent.com/52679439/112067266-02165180-8b25-11eb-8132-bc43fde80718.gif)




## About this project
The goal of this project is to make you code a function that reads files from file descriptor and returns one line ending with a new line('/n') no matter the size of either the text or one of its lines. This project will not only allow you to add a very convenient function to your collection, but it will also allow you to learn a highly interesting new concept in C programming: static variables and file descriptor. You will also gain a deeper understanding of memory allocations, whether they happen on the stack or in the heap. It allows you to learn the life cycle of a buffer and the unexpected complexity implied in the use of one or many static variables.

## Prototype 
int	get_next_line(int fd, char **line);

## Key concepts 

**1. Static variable**

Because the static variable is saved in the data segment, it is not impacted by scope rules. As a result, I utilize a static variable to keep data of a specific size while the program is running. 

**2. Memory allocation**
Because the size of input files can vary, the memory for each function call is set to the size of BUFF. The BUFF SIZE is set to 1, although it can be changed manually to any size. The allocated memory is stored in the heap memory. 

**3. File descriptor**
A file descriptor is an integer that uniquely identifies a process's open file. Standard input, output, and error are represented by the numbers 0,1, and 2. When an error occurs, it returns -1. The get_next_line function can read one line at a time from several text files.

**4. Handling memory leak**
Since we can pass multiple files with various sizes, the memory is dynamically allocated. All dynamically allocated memory(BUFF_SIZE+1) should be freed before the program ends. Otherwise there will be stack overflow. In this function, we set the temporary variable to free the memory but keep the content. 

**5. Data structure - Linked list**
We have no idea how big the memory is. We can maintain track of the information and expand it as needed with linked lists.


For more detailed information, please read 
[get_next_line.en (dragged).pdf](https://github.com/yeonuklee/get_next_line/files/6067156/get_next_line.en.dragged.pdf)
[get_next_line.en (dragged).pdf](https://github.com/yeonuklee/get_next_line/files/6067157/get_next_line.en.dragged.pdf)
[get_next_line.en (dragged).pdf](https://github.com/yeonuklee/get_next_line/files/6067158/get_next_line.en.dragged.pdf)

