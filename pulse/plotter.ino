#include "spark-plotly/spark-plotly.h"

#define DATA_POINTS 4

char* data_point_tokens[DATA_POINTS] = {"token1", "token2", "token3","token4"};

plotly graph = plotly("jjangsangy", "k7obdme0ak", data_point_tokens, "streamname", DATA_POINTS);

void setup() {
   graph.init();
   graph.fileopt = "extend";
   graph.openStream(); 
}

void loop() {

    float val1 = 8.89;
    float val2 = 5.87;
    float val3 = 9.0;
    float val4 = 10.1;
    
    // up to you to decide what these values represent and how they get initialized/updated.

    unsigned long x = millis();

    graph.plot(x, val1, data_point_tokens[0]);
    graph.plot(x, val2, data_point_tokens[1]);
    graph.plot(x, val3, data_point_tokens[2]);
    graph.plot(x, val4, data_point_tokens[3]);

}
