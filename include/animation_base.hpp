#ifndef ANIMATION_BASE_HPP
#define ANIMATION_BASE_HPP

#include <SFML/Graphics.hpp>
#include <chrono>

namespace gc_game
{
   class AnimationBase
   {
   protected:
      std::chrono::milliseconds stopDuration;
      std::chrono::high_resolution_clock::time_point starTimePoint;

      void reset();
   public:
      explicit AnimationBase(const std::chrono::milliseconds &);
   };
} // namespace gc_game

#endif // ANIMATION_BASE_HPP