//ESParaSite_Core.h

/* ESParaSite Data Logger v0.2
	Authors: Andy (DocMadmag) Eakin

	Please see /ATTRIB for full credits and OSS License Info
  	Please see /LIBRARIES for necessary libraries
  	Please see /VERSION for Hstory

	All Derived Content is subject to the most restrictive licence of it's source.

	All Original content is free and unencumbered software released into the public domain.
*/

#pragma once

class ESParaSite  {
 public:

void get_chamber ();
void get_optics ();
void get_ambient();
void get_enclosure();

struct printchamber {
  float dht_temp_c{ 0 };
  float dht_humidity{ 0 };
  float dht_dewpoint{ 0 };
} chamber_resource;

struct optics {
  float si_uvindex{ 0 };
  float si_visible{ 0 };
  float si_infrared{ 0 };
  float mlx_amb_temp_c{ 0 };
  float mlx_obj_temp_c{ 0 };
} optics_resource;

struct ambient {
  float bme_temp_c{ 0 };
  float bme_humidity{ 0 };
  float bme_barometer{ 0 };
  float bme_altitude{ 0 };
} ambient_resource;

struct enclosure {
  float case_temp{ 0 };
  float total_sec{ 0 };
  float screen_sec{ 0 };
  float led_sec{ 0 };
} enclosure_resource;


};