#pragma once
#include "components/ble/SimpleWeatherService.h"
#include "displayapp/screens/Symbols.h"

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      namespace Symbols {
        const char* GetSymbol(const Pinetime::Controllers::SimpleWeatherService::Icons icon);
        const char* GetCondition(const Pinetime::Controllers::SimpleWeatherService::Icons icon);
        const char* GetConditionShort(const Pinetime::Controllers::SimpleWeatherService::Icons icon);
      }
    }
  }
}
