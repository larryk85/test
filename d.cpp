#include <iostream>
#include <string>
#include <math.h>

double
derive(double (*f)(double), double x0)
{
      const double delta = 1.0e-6;
         double x1 = x0 - delta;
            double x2 = x0 + delta;

               double y1 = f(x1);
                  double y2 = f(x2);
                      std::cout << y1 << " " << y2 << "\n";
                         return (y2 - y1) / (x2 - x1);
}

int main()
{
        double der = derive(sin, 1.0);
           printf("%lf\n", der);

}
