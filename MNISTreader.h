#ifndef MNISTREADER_H
#define MNISTREADER_H



#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <memory>


namespace mnist
{

template <template <typename...> class Container, typename Image, typename Label>
class MNISTreader
{
    Container<Image> training_images;
    Container<Image> test_images;
    Container<Label> training_labels;
    Container<Label> test_labels;

    void resize_training(std::size_t new_size)
    {
        if (training_images.size() > new_size)
        {
            training_images.resize(new_size);
            training_labels.resize(new_size);
        }
    }
};

}


#endif // MNISTREADER_H
