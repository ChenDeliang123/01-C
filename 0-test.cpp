#include <cstdio>
#include <array>

int main()
{
    auto arr = {1, 2, 3, 4, 5};
    for(auto& x : arr){
        std::printf("%d ", x);
    }
    std::printf("\n");
    return 0;
}