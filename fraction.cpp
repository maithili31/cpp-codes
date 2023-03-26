class fraction {
    private :
        int numerator ;
        int denominator;
    
    public :
        fraction (int numerator , int denominator) {
            this -> numerator = numerator;
            this -> denominator = denominator;
        }
        void print () {
            cout<<numerator << " / " <<denominator<<endl;
        }

};