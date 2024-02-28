// HtmlReportGenerator.h
#ifndef HTML_REPORT_GENERATOR_H
#define HTML_REPORT_GENERATOR_H

#include "ReportGenerator.h"

class HtmlReportGenerator : public ReportGenerator {
public:
    void generateReport() override {
        std::cout << "Generating HTML report" << std::endl;
    }
};

#endif // HTML_REPORT_GENERATOR_H
