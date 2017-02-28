#ifndef CAMERA_H
#define CAMERA_H

#include "GameAsset.h"

#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>

class Camera: public GameAsset{
	public:	
		Camera();
		~Camera();
		glm::mat4 getViewMatrix();
		void moveX(float);
		void Draw(GLuint);
		//void reset_view();
		glm::mat4 view_matrix;
		
};

#endif

