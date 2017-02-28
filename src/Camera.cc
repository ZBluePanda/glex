#include "Camera.h"

Camera::Camera(){
	view_matrix = glm::mat4(
		glm::vec4(1.0, 0.0, 0.0, 0.0),		
		glm::vec4(0.0, 1.0, 0.0, 0.0),	
		glm::vec4(0.0, 0.0, 1.0, 0.0),	
		glm::vec4( -2, 0.0, 0.0, 1.0)	
		);
}

Camera::~Camera(){
}

void Camera::moveX(float theta){	//matrix for moving world +x axis
	glm::mat4 m = glm::mat4(
		glm::vec4(1.0, 0.0, 0.0, 0.0),
		glm::vec4(0.0, cos(theta), -sin(theta), 0.0),
		glm::vec4(0.0, sin(theta), cos(theta), 0.0),
		glm::vec4(0.0, 0.0, 0.0, 1.0)
	);
	view_matrix = m * view_matrix;
}

/*void Camera::reset_view(){
	glm::mat4 newView = glm::mat4(
		glm::vec4(1.0, 0.0, 0.0, 0.0),
    		glm::vec4(0.0, 1.0, 0.0, 0.0),
		glm::vec4(0.0, 0.0, 1.0, 0.0),
		glm::vec4(-2.0, 0.0, 0.0, 1.
+0)	
	);
	view_matrix = newView;
}*/



glm::mat4 Camera::getViewMatrix(){
	return view_matrix;
}

void Camera::Draw(GLuint){
}
