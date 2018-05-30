#ifndef __ECHO_SPHERE_H__
#define __ECHO_SPHERE_H__

#include "engine/core/math/Math.h"
#include "engine/core/geom/GeomDef.h"
#include "engine/core/base/EchoDef.h"

namespace Echo
{
	class Box;
	class Sphere
	{
	public:
		Vector3		c;		//!< center
		Real		r;		//!< radius

	public:
		Sphere();
		Sphere(const Vector3& c, Real r);
		Sphere(Real x, Real y, Real z, Real r);
		Sphere(const Sphere& src);
		~Sphere();

	public:
		bool operator == (const Sphere& src) const;
		bool operator != (const Sphere& src) const;
		const Sphere& operator = (const Sphere& src);

	public:
		void		set(const Vector3& c, Real r);
		void		set(Real x, Real y, Real z, Real r);
		bool		isIntersected(const Sphere &ref) const;
		bool		isPointIn(const Vector3& point) const;
		// generate bounding-sphere from a axis-aligned bounding-box.
		void		fromAABB(const Box& aabb);
	};
}

#endif
