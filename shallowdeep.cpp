class student {
    int age;
    char *name;

    public :
        student (int age ,char *name) {
            this -> age= age;
            this -> name= name;
        }
        void display () {
            cout<<name<<"  "<<age<<endl;
        }
};