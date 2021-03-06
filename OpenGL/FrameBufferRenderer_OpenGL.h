#ifndef FRAMEBUFFERRENDERER_OPENGL_H
#define FRAMEBUFFERRENDERER_OPENGL_H

#include <QQuickFramebufferObject>
#include <QOpenGLFramebufferObjectFormat>
#include <QOpenGLFramebufferObject>
#include <QOpenGLShaderProgram>

#include "OpenGL_Render.h"

class FrameBufferRenderer_OpenGL : public QQuickFramebufferObject::Renderer
{
    //Q_OBJECT

public:

    //FrameBufferRenderer_OpenGL(BattleMapRender* pBattleRender);
    FrameBufferRenderer_OpenGL();

    QOpenGLFramebufferObject* createFramebufferObject(const QSize &size);

    void render();

    //void initObjectRendered();

private:
    // Obj OpenGL, ex:
    OpenGlRender m_openGlRender;

    //BattleMapRender* m_battleMapRender;

    // TEST ////////////////////////////////////////////////////////////////
    /*void setViewportSize(const QSize &size) { m_viewportSize = size; }
    void setWindow(QQuickWindow *window) { m_window = window; }

public slots:
    void paint();

private:
    QSize m_viewportSize;
    QOpenGLShaderProgram *m_program;
    QQuickWindow *m_window;*/
    /////////////////////////////////////////////////////////////////////////
};

#endif // FRAMEBUFFERRENDERER_OPENGL_H
