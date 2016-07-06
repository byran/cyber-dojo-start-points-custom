#ifndef SPI_HPP
#define SPI_HPP

class SPI
{
public:
    virutal ~SPI() { }
    virtual unsigned char WriteRead() = 0;
    virtual void SelectChip() = 0;
    virtual void DeselectChip() = 0;
};

#endif
