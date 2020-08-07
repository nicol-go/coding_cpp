// g++ oop.cpp -std=c++11 -o object

#include <iostream>
#include <string>
#include <vector>
#include <set>

class Interface{};

class Implement final : public Interface
{
public:
    using super_type = Interface;
    using this_type = Implement;
private:
};

struct KafkaConfig final
{
    int id;
    std::string ip_addr;
};

class DemoClass final
{
public:
    using this_type = DemoClass;
    using kafka_cont_type = KafkaConfig;

public:
    using string_type = std::string;
    using unit32_type = uint32_t;

    using set_type = std::set<int>;
    using vector_type = std::vector<std::string>;

public:
    DemoClass() = default;
    ~DemoClass() = default;

    DemoClass(const DemoClass&) = delete;
    DemoClass& operator=(const DemoClass&) = delete;

public:
    explicit DemoClass(const string_type& str)
    {
        m_name = str;
    }
    explicit operator bool ()
    {
        return !m_name.empty();
    }
public:
    void set_name(const string_type& str);

private:
    string_type m_name = "tom";
    unit32_type m_age = 23;
    set_type m_books;

private:
    kafka_cont_type m_conf;
};

class DemoDelegating final
{
private:
    int a;
public:
    DemoDelegating(int x) : a(x)
    {}

    DemoDelegating():DemoDelegating(0)
    {}

    DemoDelegating(const std::string& s) : DemoDelegating(std::stoi(s))
    {}
};

class DemoInit final
{
private:
    int a = 0;
    std::string s = "hello";
    std::vector<int> v{1,2,3};
public:
    DemoInit() = default;
    ~DemoInit() = default;

public:
    DemoInit(int x) : a(x) {}
};

int main()
{
    using namespace std;

    cout << "show class." << endl;
}