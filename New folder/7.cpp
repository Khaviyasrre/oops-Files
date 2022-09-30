#include&lt;iostream&gt;
using namespace std;
class T4Tutorials
{
private:
int n,i;
public:
T4Tutorials()
{
cout&lt;&lt;&quot;Enter number to Display its reverse: &quot;;
cin&gt;&gt;n;
}
~T4Tutorials()
{

cout&lt;&lt;endl&lt;&lt;&quot; reverse of the Entered Number is: &quot;;
for(i=n;n&gt;0;n=n/10)
{
cout&lt;&lt;n%10;
}
}

};
int main()
{
T4Tutorials R;
}
