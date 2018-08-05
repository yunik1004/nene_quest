#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "../scene.h"
#include "../../camera/camera.h"
#include "../../lib/model.h"
#include "../../lib/text.h"

class mainScene : public Scene {
private:
	ModelOBJ *title;
	Text *text;
	Camera camera;
	static void keyCallback(GLFWwindow *, int, int, int, int);
public:
	mainScene(void);
	~mainScene(void);
	Scene* update(void);
};
