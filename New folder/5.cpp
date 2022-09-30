#include&lt;iostream&gt;
using namespace std;
class pyramid
{
private:
int r,T4Tutorials,SHOW,n,no;
public:
pyramid() //constructor
{
no=5;
n=no;
}
void sol()

{
for(r=1;r&lt;=no;r++)
{
for(T4Tutorials=1;T4Tutorials&lt;=n;T4Tutorials++)
{
cout&lt;&lt;&quot; &quot;;
}
n--;
for(SHOW=1;SHOW&lt;=r;SHOW++)
{
cout&lt;&lt;&quot; &quot;&lt;&lt;r;
}
cout&lt;&lt;endl;
}
}
~pyramid() //destructor
{
cout&lt;&lt;endl&lt;&lt;&quot;object destroyed&quot;;
}

};
int main()
{
pyramid ob;
ob.sol();
}
