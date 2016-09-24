#!/bin/bash

cd lines_data

wget -O bakerloo.json https://api.tfl.gov.uk/Line/bakerloo/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O central.json https://api.tfl.gov.uk/Line/central/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O circle.json https://api.tfl.gov.uk/Line/circle/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O district.json https://api.tfl.gov.uk/Line/district/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O hammersmith-city.json https://api.tfl.gov.uk/Line/hammersmith-city/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O jubilee.json https://api.tfl.gov.uk/Line/jubilee/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O metropolitan.json https://api.tfl.gov.uk/Line/metropolitan/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O northern.json https://api.tfl.gov.uk/Line/northern/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O piccadilly.json https://api.tfl.gov.uk/Line/piccadilly/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O victoria.json https://api.tfl.gov.uk/Line/victoria/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O waterloo-city.json https://api.tfl.gov.uk/Line/waterloo-city/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=

wget -O station-bakerloo.json https://api.tfl.gov.uk/Line/bakerloo/StopPoints?app_id=&app_key=
wget -O station-central.json https://api.tfl.gov.uk/Line/central/StopPoints?app_id=&app_key=
wget -O station-circle.json https://api.tfl.gov.uk/Line/circle/StopPoints?app_id=&app_key=
wget -O station-district.json https://api.tfl.gov.uk/Line/district/StopPoints?app_id=&app_key=
wget -O station-hammersmith-city.json https://api.tfl.gov.uk/Line/hammersmith-city/StopPoints?app_id=&app_key=
wget -O station-jubilee.json https://api.tfl.gov.uk/Line/jubilee/StopPoints?app_id=&app_key=
wget -O station-metropolitan.json https://api.tfl.gov.uk/Line/metropolitan/StopPoints?app_id=&app_key=
wget -O station-northern.json https://api.tfl.gov.uk/Line/northern/StopPoints?app_id=&app_key=
wget -O station-piccadilly.json https://api.tfl.gov.uk/Line/piccadilly/StopPoints?app_id=&app_key=
wget -O station-victoria.json https://api.tfl.gov.uk/Line/victoria/StopPoints?app_id=&app_key=
wget -O station-waterloo-city.json https://api.tfl.gov.uk/Line/waterloo-city/StopPoints?app_id=&app_key=
