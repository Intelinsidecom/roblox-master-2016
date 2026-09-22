#pragma once

#include <boost/shared_ptr.hpp>
#include <boost/scoped_ptr.hpp>

#include "v8datamodel/Game.h"
#include "rbx/signal.h"

namespace RBX
{
    class DataModel;
    class ViewBase;
    class FunctionMarshaller;

    namespace Tasks { class Sequence; }
    namespace Reflection { class PropertyDescriptor; }
}

class GameView
{
    boost::shared_ptr<RBX::ViewBase> view;
    boost::shared_ptr<RBX::Game> game;
    RBX::FunctionMarshaller* marshaller;

    class RenderJob;
    boost::shared_ptr<RenderJob> renderJob;

    void completeViewPrep(boost::shared_ptr<RBX::Game> game);

public:
    GameView(void* wnd, unsigned int width, unsigned int height);
    ~GameView(void);

    static GameView* create_view(boost::shared_ptr<RBX::Game> game, void* wnd,
        unsigned int width, unsigned int height);

    boost::shared_ptr<RBX::DataModel> getDataModel() { return game->getDataModel(); }
    boost::shared_ptr<RBX::Game> getGame() { return game; }
    RBX::ViewBase* getView() { return view.get(); }

    void setBounds(unsigned int width, unsigned int height);
    void requestStopRendering();
    void requestResumeRendering();

private:
    unsigned int width;
    unsigned int height;

    static void bindWorkspace(boost::shared_ptr<RBX::ViewBase> view,
        boost::shared_ptr<RBX::DataModel> const dataModel, bool buildGUI = true);
};
