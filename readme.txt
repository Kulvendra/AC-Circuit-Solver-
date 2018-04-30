-The attached file is program to draw an svg image and solve an ac circuit;
-For the solving part we made certain assumption and guidelines which are briefly mentioned below;
We have solved the ac circuit in which all elements are connected in series or in parallel with any number of voltage source and  current source;
-there can any number of elements hence we have covered all possible 7 cases which are 
-purely resistive
-purely capacitive
-purely inductive
-lc circuit
-lr circuit
-rc circuit
-lcr circuit
-User are required to follow following guidelines while entering input
-There should be space between magnitude and their unit likewise 10 k is correct while 10k is not valid.
-To enter a value with decimal point u neeed to use unit to express that floating point integer i.e to enter 12.35 u need enter 1235 c where 'c'
stands for centi and is equal to 1/100.so input requires integer unit ,choose your unit wisely so that it can convert your input into floating point
integer.

-Following are the unit provided by program with their abbrevation :-
'M'  for mega=1000000;
'k'  for kilo=1000;
'da'  for deca=10;
'd'  for deci=1/10;
'c'  for centi=1/100;
'm'  for milli=1/1000;
'u' for micro=1/1000000;
'n' for nano=1/1000000000;

-For voltage the amplitude only excepts integer with no unit .
-Four testcases are also provided which cover following 4 case;
1)Multiple voltage source with multiple elements connected in sereies
2)Multiple voltage source with multiple elements connected in parallel
3)Multiple current source with multiple elements connected in sereies
4)Multiple current source with multiple elements connected in parallel

-Intially program needs to know  type of circuit out of the above four from user.
-Make sure to follow above guidelines while entering input any violation will result in no result  

