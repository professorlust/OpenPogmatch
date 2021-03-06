//
//  CardView.h
//  pogmatch
//
//  Created by Shu Chiun Cheah on 1/27/12.
//  Copyright (c) 2012 GeoloPigs, Inc.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
//  associated documentation files (the "Software"), to deal in the Software without restriction, including
//  without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to
//  the following conditions:
// 
//  The above copyright notice and this permission notice shall be included in all copies or substantial
//  portions of the Software.
// 
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
//  LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
//  NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
//  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <UIKit/UIKit.h>

enum CardStates
{
    CARD_STATE_ACTIVE = 0,
    CARD_STATE_SELECTED,
    CARD_STATE_MATCHED,
    
    CARD_STATE_NUM
};

@class Card;
@interface CardView : UIControl
{
    // the game card
    Card* _card;

    // view components
    UIImageView* _imageView;
    
    // state
    unsigned int _state;
    
    // animation
    float _shakeRange;
    float _vel;
    float _rotation;
    unsigned int _numCycles;
    unsigned int _endCycle;
}
@property (nonatomic,retain) Card* card;
@property (nonatomic,assign) unsigned int state;

- (id) initWithFrame:(CGRect)frame forCard:(Card*)gameCard;
- (void) updateAnim:(NSTimeInterval)elapsed;
- (void) shakeCard:(float)angle numTimes:(unsigned int)num;
@end
