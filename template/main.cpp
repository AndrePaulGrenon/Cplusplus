#include "Vertex.class.tpp"
#include "Pair.class.tpp"

int main(void)
{
    Vertex<int>    vector1(12, 23, 42);
    Vertex<>      vector2(12, 23, 42);

    std::cout << vector1 << std::endl;
    std::cout << vector2 << std::endl;

    return (0);
}