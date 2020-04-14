#ifndef SALES_H_
#define SALES_H_
namespace ncsales{
    
    class Sales{
        private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;

        public:
        Sales();
        Sales(const double ar[], int n);
        void setSales();
        void showSales();
    };
}
#endif