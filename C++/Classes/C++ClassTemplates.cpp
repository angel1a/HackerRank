template <typename T>
class AddElements
{
    T data;
public:
    AddElements(T x)
    {
        data = x;
    }
    T add(T x)
    {
        return data + x;
    }
};

template <>
class AddElements <string>
{
    string data;
public:
    AddElements(string x)
    {
        data = x;
    }
    string concatenate(string x)
    {
        return data + x;
    }
};