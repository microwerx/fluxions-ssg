#ifndef FLUXIONS_SSG_SCENE_GRAPH_BASE_HPP
#define FLUXIONS_SSG_SCENE_GRAPH_BASE_HPP

#include <fluxions_base.hpp>
#include <fluxions_file_system.hpp>
#include <fluxions_resource_manager.hpp>
#include <fluxions_simple_geometry_mesh.hpp>

namespace Fluxions {
	constexpr int MaxSphlLights = 16;
	constexpr int MaxSphlDegree = 9;
	constexpr int DefaultSphlDegree = 2;
	constexpr int SphlSunIndex = MaxSphlLights;

	enum class SceneGraphFileType {
		Unknown = 0,
		MTL,
		OBJ,
		SCN,
		ANIM,
		CONF,
		JPG,
		PNG,
		EXR,
		PFM,
		PPM,
		MaxFileTypes
	};

	using FileTypeStringPair = std::pair<SceneGraphFileType, std::string>;
}

#endif
