#include "decorator.hpp"
#include "text_view.hpp"
#include "scroll_decorator.hpp"
#include "border_decorator.hpp"
#include "Visual.hpp"
#include <memory>


int main(){
    std::unique_ptr<VisualComponent> text_viewer = std::make_unique<TextView>();
    std::unique_ptr<Decorator> scroll_decorator = std::make_unique<Scroll>(std::move(text_viewer));
    std::unique_ptr<Decorator> border_decorator = std::make_unique<Border_Decorator>(std::move(scroll_decorator));

    border_decorator->Draw();


}