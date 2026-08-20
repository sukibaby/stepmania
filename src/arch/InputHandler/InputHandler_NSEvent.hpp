//
//  InputHandler_NSEvent.hpp
//  StepMania
//
//  Created by heshuimu on 12/22/19.
//

#ifndef InputHandler_NSEvent_hpp
#define InputHandler_NSEvent_hpp

#include <cstdint>
#include <cstdio>
#include "InputHandler.h"

#if __OBJC__
#   import <Cocoa/Cocoa.h>
#   ifndef EVENT_TYPE
#       define EVENT_TYPE NSEvent *
#   endif
#else
#   ifndef EVENT_TYPE
#       define EVENT_TYPE void *
#   endif
#endif

class InputHandler_NSEvent : public InputHandler
{
public:
    InputHandler_NSEvent();
    ~InputHandler_NSEvent();

    void GetDevicesAndDescriptions( std::vector<InputDeviceInfo>& vDevicesOut );
    
protected:
    void HandleEvent( EVENT_TYPE e );
    void InitKeyCodeMap();
        
private:
    DeviceButton m_NSKeyCodeMap[0x100];
    unsigned     m_ResponderID;
};

#endif /* InputHandler_NSEvent_hpp */
