#include&lt;iostream&gt;
Using namespace std;
Class cube
{
Public:
Double side;
Double volume()
{
Return(side+side+side);
}
cube(double side1)

{

cout &lt;&lt; &quot;\nA constructor is called&quot; &lt;&lt; endl;

side=side1;

}

cube()

{

cout &lt;&lt; &quot;\nA default constructor is called &quot; &lt;&lt; endl;

}

~cube()

{

cout &lt;&lt; &quot;\nDestructing &quot; &lt;&lt; side &lt;&lt; endl;

}

};

int main()

{

cube c1(2.34);

cube c2;

cout &lt;&lt; &quot;\nThe side of the cube is: &quot; &lt;&lt; c1.side &lt;&lt; endl;

cout &lt;&lt; &quot;\nThe volume of the first cube is : &quot; &lt;&lt; c1.volume() &lt;&lt; endl;

cout &lt;&lt; &quot;\nEnter the length of the second cube : &quot; ;

cin &gt;&gt; c2.side;

cout &lt;&lt; &quot;\nThe volume of second cube is : &quot; &lt;&lt; c2.volume() &lt;&lt; endl;

return(0);

}
