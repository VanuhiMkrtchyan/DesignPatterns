#ifndef TEXT_VIEW_HPP
#define TEXT_VIEW_HPP

#include "Visual.hpp"

class TextView : public	VisualComponent
{
	public:
		void Draw() override;

		TextView(){};
		virtual ~TextView() = default;
};

#endif //TEXT_VIEW_HPP