//  $Id: animation_base.hpp 1681 2008-04-09 13:52:48Z hikerstk $
//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2009  Joerg Henrichs
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 3
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_ANIMATION_BASE_HPP
#define HEADER_ANIMATION_BASE_HPP

/** A base class for all animations. */

class AnimationBase
{
private:
	/** Two types of animations: cyclic ones that play all the time, and
	 *  one time only (which might get triggered more than once). */
	enum AnimTimeType { ATT_CYCLIC, ATT_CYCLIC_ONCE } m_anim_type;

	/** True if the animation is currently playing. */
	bool  m_playing;

	/** For one time animations: start time. */
	float m_start;

	/** For cyclic animations: duration of the cycle. */
	float m_cycle_length;

	/** The current time in the cycle of a cyclic animation. */
	float m_current_time;

public:
	AnimationBase() {}
    virtual ~AnimationBase(){}


	virtual void update(float dt);

};   // AnimationBase

#endif

