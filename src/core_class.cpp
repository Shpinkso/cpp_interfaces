class Concrete : public Interface
{
    private:
        int myMember;
    public:
        Concrete(){}
        ~Concrete(){}
        void method1();
        void method2();
};

// Provide implementation for the methods
void Concrete::method1()
{

}

void Concrete::method2()
{

}

int main(void)
{
    Interface *f = new Concrete();
    f->method1();
    f->method2();
    delete f;
    return 0;
}