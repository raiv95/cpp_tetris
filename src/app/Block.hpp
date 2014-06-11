/******************************************************************************/
/*! \file Block.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef BLOCK_HPP_
#define BLOCK_HPP_

#include "Square.hpp"

class Block: public Square {
private:
	ColorType color;

public:
	Block(ColorType Color) {this->color = Color;};
	squareType getType() {return typeBlock;};
	ColorType getColor() {return color;};
};

#endif /* BLOCK_HPP_ */
