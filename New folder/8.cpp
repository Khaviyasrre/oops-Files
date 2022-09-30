#include &lt;iostream&gt;
using namespace std;

class Demo
{

private:
int X;
int Y;

public:
Demo (int a, int b);
void Input();
void Display();

};
Demo:: Demo(int a, int b)
{
X = a;
Y = b;
}
void Demo:: Input()
{
cout &lt;&lt; &quot;Enter Value of X: &quot;; cin &gt;&gt; X;
cout &lt;&lt; &quot;Enter Value of Y: &quot;; cin &gt;&gt; Y;
}
void Demo:: Display()

{
cout &lt;&lt; endl &lt;&lt; &quot;X: &quot; &lt;&lt; X;
cout &lt;&lt; endl &lt;&lt; &quot;Y: &quot; &lt;&lt; Y &lt;&lt; endl;
}

int main()
{
Demo d(10,20) ;
cout &lt;&lt; endl &lt;&lt;&quot;Method 1: &quot; &lt;&lt; endl;
cout &lt;&lt; &quot;Value after initialization: &quot; ;
d.Display();

d.Input();
cout &lt;&lt; &quot;Value after User Input : &quot;;
d.Display();
Demo d1 = Demo(10,20);
cout &lt;&lt; endl &lt;&lt; &quot;Method 2: &quot; &lt;&lt; endl;
cout &lt;&lt; &quot;Value after initialization: &quot;;
d1.Display();

return 0;
}
