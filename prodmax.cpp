#include <fstream>
using namespace std;
int main()
{
    ifstream f("prodmax.in");
    int nr;
    f >> nr;
    f.close();
    int p=1, x=0, prodmax=0, t1=0, t2=0;
    while (nr > 9)
    {
        x = (nr%10)*p + x;
        p *= 10;
        nr /= 10;
        if (nr*x >= prodmax)
        {
            prodmax = nr*x;
            t1 = nr;
            t2 = x;
        }
    }
    ofstream g("prodmax.out");
    g << prodmax << '\n';
    g << t1 << '\n';
    g << t2;
    g.close();
    return 0;
}
