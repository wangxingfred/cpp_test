#include "GenericVirtual.h"

int main()
{
    auto receiver = new Receiver<float>;
    auto manager = new Manager<float>;

    manager->SendMessage(*receiver, 0.2f);

    return 0;
}