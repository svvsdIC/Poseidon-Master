#pragma once

// Includes
#include <orutil.h>
#include "CModule.h"

class CBlink : public CModule
{
    public:
        CBlink();//constructor
        void Initialize();//init, needed
        void Update( CCommand& commandIn );//update, needed

    private:
        // Timers
        orutil::CTimer m_statusTimer;
        #define BLINK_STATUS_DELAY_MS 1000
        int m_counter;
        
        orutil::CTimer m_fastTimer;
        #define BLINK_FAST_DELAY_MS 100
        int m_fastCounter;
};
