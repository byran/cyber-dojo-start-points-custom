#ifndef SPI_HPP
#define SPI_HPP

class SPI
{
public:
    virtual ~SPI() { }
    virtual unsigned char WriteRead(unsigned char writeByte) = 0;
    virtual void SelectChip() = 0;
    virtual void DeselectChip() = 0;
};

#endif
