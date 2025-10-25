
/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdbool.h>
#include <platform.h>
#include "drivers/io.h"
// #include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/bus.h"
#include "drivers/pwm_mapping.h"
#include "drivers/pinio.h"

timerHardware_t timerHardware[] = {

    // DEF_TIM(TIM1, CH1, PA8,  TIM_USE_MOTOR | TIM_USE_SERVO,  0, 1), // S1_OUT 2,1 D(2, 1, 6)
    // DEF_TIM(TIM1, CH2, PA9,  TIM_USE_MOTOR | TIM_USE_SERVO,  1, 1), // S2_OUT 2,2 D(2, 2, 6)
    // DEF_TIM(TIM1, CH3, PA10, TIM_USE_MOTOR | TIM_USE_SERVO,  1, 1), // S3_OUT 2,6 D(2, 6, 6)
    // DEF_TIM(TIM3, CH3, PB0,  TIM_USE_MOTOR | TIM_USE_MOTOR,  0, 0), // S4_OUT 1,7 D(1, 7, 5)
    
    DEF_TIM(TIM1, CH1, PA8, TIM_USE_OUTPUT_AUTO, 0, 0),  // S1
    DEF_TIM(TIM1, CH2, PA9, TIM_USE_OUTPUT_AUTO, 0, 0),  // S2
    DEF_TIM(TIM1, CH3, PA10, TIM_USE_OUTPUT_AUTO, 0, 0), // S3
    DEF_TIM(TIM3, CH3, PB0, TIM_USE_OUTPUT_AUTO, 0, 0),  // S4

    DEF_TIM(TIM2, CH1, PA15,  TIM_USE_ANY,   0, 0), //softserial_tx1 - LED pin
    DEF_TIM(TIM2, CH3, PB10,  TIM_USE_ANY,   0, 0), //softserial_rx1 - cam ctrl pin
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
