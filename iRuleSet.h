/* 
 * File:   iRuleSet.h
 * Author: cameron
 *
 * Created on October 28, 2013, 5:39 PM
 */

#ifndef IRULESET_H
#define	IRULESET_H

#include "constants.h"

class iRuleSet {
public:
    
    virtual Grid& simulateGenerations( Grid live, int numGenerations, grid_dimension terrain) = 0;
    
};


#endif	/* IRULESET_H */

