/******************************************************************************/
/*! \file Line.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef LINE_HPP_
#define LINE_HPP_

#include "Block.hpp"

class Line {
private:
	int yPos;

public:
	bool isSquareFree(int xPos);
	void setBlock(Block &theBlock, int xPos);
	bool isFull();
};

#endif /* LINE_HPP_ */
