#pragma once

#include "pebble.h"

static const GPathInfo MINUTE_HAND_POINTS = {
  4,
  (GPoint []) {
    { -3, 20 },
    { 3, 20 },
    { 3, -75 },
    { -3, -75 }
  }
};

static const GPathInfo HOUR_HAND_POINTS = {
  4, (GPoint []){
    {-3, 20},
    {3, 20},
    {3, -55},
    {-3, -55}
  }
};
