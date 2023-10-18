# Exception-Handling-in-CPP

##**AIM**:To study exception handling in C++

##**THEORY**:

<p>An exception is a problem that arises during the execution of a program. A C++ exception is a response to an exceptional circumstance that arises while a program is running, such as an attempt to divide by zero.<br>
Exceptions provide a way to transfer control from one part of a program to another. C++ exception handling is built upon three keywords: try, catch, and throw.</p>

<p>1.throw − A program throws an exception when a problem shows up. This is done using a throw keyword.<br>
2.catch − A program catches an exception with an exception handler at the place in a program where you want to handle the problem. The catch keyword indicates the catching of an exception.<br>
3.try − A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or more catch blocks.</p>

##Syntax:
<p>try {<br>
  // Block of code to try<br>
  throw exception; // Throw an exception when a problem arise<br>
}<br>
catch () {<br>
  // Block of code to handle errors<br>
}</p>
